/* Ghidra address: 01497c60 */
/* Ghidra symbol: FUN_01497c60 */


void FUN_01497c60(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 unaff_XMM6_Qa;
  ulonglong in_stack_ffffffffffffff90;
  undefined8 *local_48;
  undefined1 local_3c [20];
  
  uVar1 = *PTR_DAT_02004f10;
  *PTR_DAT_02004f10 = 0;
  FUN_014b7d50(0,param_2,1,0,0,in_stack_ffffffffffffff90 & 0xffffffffffff0000,local_3c);
  FUN_01995600(param_2,0,0);
  plVar4 = (longlong *)FUN_01995660(param_2,0,0);
  while (plVar4 != (longlong *)0x0) {
    FUN_01d03160(plVar4);
    cVar2 = FUN_0198a580(plVar4);
    if (cVar2 == '\x04') {
      iVar3 = FUN_01690fe0();
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          cVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4,iVar6,&local_48);
          if (cVar2 == '\x03') {
            unaff_XMM6_Qa = *local_48;
          }
          if (cVar2 == '\x06') {
            unaff_XMM6_Qa = *local_48;
          }
          uVar5 = FUN_01474520(&DAT_014742b0,1,plVar4,iVar6,cVar2,unaff_XMM6_Qa);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 3000),uVar5);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_01995800(param_2,0,0);
      plVar4 = (longlong *)FUN_01995660(param_2);
    }
  }
  *PTR_DAT_02004f10 = uVar1;
  return;
}

