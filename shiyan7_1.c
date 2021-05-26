//#include<stdio.h>
//#include<stdlib.h>
//
//#define  MAXLEN  128
//
//typedef  struct
//{
//    char  data;
//    int  lchild;
//    int  rchild;
//}  StaticLinkNode;
//
//typedef  struct
//{
//    StaticLinkNode  List[MAXLEN];
//    int  root;
//}  StaticLinkList;
//
//typedef  struct  bt
//{
//    char  data;
//    struct  bt* lchild;
//    struct  bt* rchild;
//}  BT;
//
//BT* StaticLinkList2BT(StaticLinkList* SLL, int  i)
//{
//    if (i != -1)
//    {
//        BT* T;
//        T = (BT*)malloc(sizeof(BT));
//        T->data = SLL->List[i].data;
//        T->lchild = StaticLinkList2BT(SLL, SLL->List[i].lchild);
//        T->rchild = StaticLinkList2BT(SLL, SLL->List[i].rchild);
//        return  T;
//    }
//    return  NULL;
//}
//
//void  degree(BT* root, char* node, int* i)//输入参数为二叉树的根结点root，存储满足要求的结点的数组node，满足要求的结点个数i
//{
//    if (root!=NULL) {
//        degree(root->lchild, node, i);
//        degree(root->rchild, node, i);
//        if (root->lchild != NULL && root->rchild != NULL) {
//            node[*i] = root->data;
//            *i = *i + 1;
//        }
//    }
//}
//
//int  main(void)
//{
//    int  N = 0, M = 0, i = 0;
//    StaticLinkList  SLL;
//    BT* T;
//    char  node[MAXLEN];
//    scanf("%d%d", &N, &SLL.root);
//    for (i = 0; i < N; i++)
//    {
//        getchar();
//        scanf("%c%d%d", &SLL.List[i].data, &SLL.List[i].lchild, &SLL.List[i].rchild);
//    }
//    T = StaticLinkList2BT(&SLL, SLL.root);//将以静态链表存储的链表转化为二叉链表
//    degree(T, node, &M);
//    if (M)
//    {
//        printf("%d\n", M);
//        for (i = 0; i < M; i++)
//        {
//            printf("%c  ", node[i]);
//        }
//        printf("\n");
//    }
//    else
//    {
//        printf("There  are  no  nodes  of  degree  two!\n");
//    }
//    return  0;
//}