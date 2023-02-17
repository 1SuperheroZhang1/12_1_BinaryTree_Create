#include "function.h"

//二叉树的建树(层次建树)
int main(){
    BiTree pnew;//用来指向新申请的树结点
    BiTree tree=NULL;//tree是指向树根的，代表树
    //phead指向辅助队列的队头，ptail指向辅助队列的队尾。list_pnew用于存储新入队的结点
    ptag_t phead=NULL,ptail=NULL,list_pnew=NULL,pcur;//pcur始终指向队列待放入结点的位置
    char c;
    while(scanf("%c",&c)){//输入内容为abcdefghij
        if(c=='\n'){
            break;//读取到换行就结束
        }
        //calloc申请空间并对空间进行初始化，赋值为0，calloc申请的空间大小是两个参数直接相乘
        pnew=(BiTree) calloc(1,sizeof(BiTNode));
        pnew->c=c;//存入数据
        list_pnew=(ptag_t) calloc(1,sizeof(tag_t));//给队列结点申请空间
        list_pnew->p=pnew;//将树节点的地址存入辅助队列
        if(NULL==tree){
            tree=pnew;//tree指向树的根节点
            phead=list_pnew;//第一个结点即是队列头，又是队列尾
            ptail=list_pnew;//队列尾
            pcur=list_pnew;//pcur要指向要进入树的父节点
        }else{
            //让元素先入队列
            ptail->next=list_pnew;
            ptail=list_pnew;
            //把结点放入树中
            if(pcur->p->lchild==NULL){
                pcur->p->lchild=pnew;//把新结点放入要插入结点的左边
            }else if(pcur->p->rchild==NULL){
                pcur->p->rchild=pnew;//把新结点放入要插入结点的右边
                pcur=pcur->next;//如果当前结点已满(左右孩子都有),pcur指向下一个
            }
        }
    }
    return 0;
}

