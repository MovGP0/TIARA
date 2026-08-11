/* Ghidra address: 01c89950 */
/* Ghidra symbol: FUN_01c89950 */


void FUN_01c89950(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  cVar3 = FUN_01993e20(*(undefined8 *)(param_1 + 0x27a8));
  if (cVar3 == '\0') {
    lVar4 = FUN_01364e80(&PTR_FUN_01362918,1,param_1);
    *(undefined1 *)(lVar4 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    FUN_01c6cee0(param_1,lVar4);
  }
  else {
    bVar1 = false;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x27a8) + 0x10);
    iVar8 = 0;
    bVar2 = false;
    if (-1 < iVar9 + -1) {
      do {
        bVar1 = bVar2;
        plVar5 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0x27a8),iVar8);
        cVar3 = FUN_0198a580(plVar5);
        if ((cVar3 == '\x04') && (cVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5), cVar3 != '\0')) {
          uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_017be0e0(plVar5,uVar6,&local_38,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
                       *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
          plVar7 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          (**(code **)(*plVar7 + 0x30))(plVar7,local_38,local_34,local_30,local_2c);
          *(undefined1 *)(plVar5 + 0xa8) = *(undefined1 *)(param_2 + 0x18);
          uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_017be0e0(plVar5,uVar6,&local_38,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
                       *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
          plVar5 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          (**(code **)(*plVar5 + 0x30))(plVar5,local_38,local_34,local_30,local_2c);
          bVar1 = true;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
        bVar2 = bVar1;
      } while (iVar9 != 0);
    }
    if (bVar1) {
      FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
    }
  }
  return;
}

