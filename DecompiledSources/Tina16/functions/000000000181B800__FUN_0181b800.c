/* Ghidra address: 0181b800 */
/* Ghidra symbol: FUN_0181b800 */


void FUN_0181b800(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *local_30 [2];
  
  local_30[0] = (longlong *)0x0;
  iVar2 = FUN_00654c00();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00654bc0(param_2,iVar5);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00640c18);
      if (cVar1 != '\0') {
        uVar3 = FUN_00654bc0(param_2,iVar5);
        FUN_0181b800(param_1,uVar3);
      }
      uVar3 = FUN_00654bc0(param_2,iVar5);
      uVar4 = FUN_0041b800(local_30);
      cVar1 = FUN_00452370(uVar3,&DAT_0181b8f8,uVar4);
      if (cVar1 != '\0') {
        (**(code **)(*local_30[0] + 0x18))(local_30[0],*(undefined4 *)(param_1 + 0x38));
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041b800(local_30);
  return;
}

