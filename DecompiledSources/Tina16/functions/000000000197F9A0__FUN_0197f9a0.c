/* Ghidra address: 0197f9a0 */
/* Ghidra symbol: FUN_0197f9a0 */


undefined4 FUN_0197f9a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (param_2[2] != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                      (*(longlong **)(param_1 + 8),param_2[2]);
    if (iVar2 != -1) {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01921f40);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar2);
        uVar3 = (**(code **)(*param_2 + 0x308))(param_2,0,uVar4);
      }
    }
    if ((char)uVar3 != '\0') {
      FUN_00410f20(param_2);
    }
  }
  return uVar3;
}

