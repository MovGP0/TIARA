/* Ghidra address: 006fab10 */
/* Ghidra symbol: FUN_006fab10 */


void FUN_006fab10(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  FUN_004d3170(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) != 0) {
    uVar2 = FUN_004113d0(param_2,&PTR_FUN_006ccaa0);
    if ((char)uVar2 != '\0') {
      if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        uVar1 = (undefined4)param_1[0x13];
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x4a4);
      }
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),uVar1,
                 *(undefined4 *)(param_2 + 0x4a8));
    }
  }
  return;
}

