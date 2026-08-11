/* Ghidra address: 0181b950 */
/* Ghidra symbol: FUN_0181b950 */


void FUN_0181b950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_30 [2];
  
  local_30[0] = (longlong *)0x0;
  iVar2 = FUN_00654c00();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_00654bc0(param_2,iVar6);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_007f0370);
      if (cVar1 == '\0') {
        uVar4 = FUN_00654bc0(param_2,iVar6);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_00640c18);
        if (cVar1 != '\0') {
          uVar4 = FUN_00654bc0(param_2,iVar6);
          FUN_0181b950(param_1,uVar4);
        }
      }
      else {
        uVar4 = FUN_00654bc0(param_2,iVar6);
        uVar4 = FUN_0065b870(uVar4);
        thunk_FUN_041b2403(uVar4,**(undefined4 **)(param_1 + 0x88),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10));
      }
      uVar4 = FUN_00654bc0(param_2,iVar6);
      uVar5 = FUN_0041b800(local_30);
      cVar1 = FUN_00452370(uVar4,&DAT_0181bab8,uVar5);
      if (cVar1 != '\0') {
        uVar3 = FUN_0181a900(*(undefined8 *)(param_1 + 0x80));
        (**(code **)(*local_30[0] + 0x18))(local_30[0],uVar3);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041b800(local_30);
  return;
}

