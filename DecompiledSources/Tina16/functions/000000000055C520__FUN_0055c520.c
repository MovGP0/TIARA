/* Ghidra address: 0055c520 */
/* Ghidra symbol: FUN_0055c520 */


void FUN_0055c520(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                 undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  plVar2 = (longlong *)FUN_0055c250(param_1);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    (*(code *)plVar2[2])(param_1,local_40);
    uVar3 = FUN_0044d490(&PTR_FUN_004367b8,1,local_40[0]);
    FUN_004134c0(uVar3);
  }
  FUN_00419260(&local_30,&DAT_00492e48,1,(longlong)(param_4 + 2));
  iVar5 = 0;
  if (-1 < param_4) {
    iVar6 = param_4 + 1;
    do {
      FUN_00417c40(local_30 + (longlong)iVar5 * 0x20,param_3,&DAT_00527bf8);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00417c40(local_30 + (longlong)(param_4 + 1) * 0x20,param_5,&DAT_00527bf8);
  cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if (cVar1 == '\0') {
      lVar4 = 0;
      if (local_30 != 0) {
        lVar4 = *(longlong *)(local_30 + -8);
      }
      FUN_00557c30(plVar2,&local_80,param_2,local_30,lVar4 + -1);
      goto code_r0x0055c6d0;
    }
  }
  lVar4 = 0;
  if (local_30 != 0) {
    lVar4 = *(longlong *)(local_30 + -8);
  }
  FUN_00557cd0(plVar2,&local_60,param_2,local_30,lVar4 + -1);
code_r0x0055c6d0:
  FUN_00417840(&local_80,&DAT_00527bf8,2);
  FUN_00414480(local_40);
  FUN_00419430(&local_30,&DAT_00492e48);
  return;
}

