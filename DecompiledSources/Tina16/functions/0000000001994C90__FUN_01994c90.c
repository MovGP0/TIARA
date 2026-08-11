/* Ghidra address: 01994c90 */
/* Ghidra symbol: FUN_01994c90 */


void FUN_01994c90(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_0198a680(local_20,param_2);
    if (local_20[0] == 0) {
      cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
      if ((cVar1 != '\0') &&
         (((undefined **)*param_2 == &PTR_FUN_017c0190 ||
          ((undefined **)*param_2 == &PTR_FUN_01cf10a8)))) {
        if ((*(int *)(param_1 + 0x2c) == 1) && ((undefined **)*param_2 == &PTR_FUN_01cf10a8)) {
          cVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
          (**(code **)(*param_2 + 0xf0))
                    (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210),cVar1 == '\0',0,
                     0,0);
        }
        else {
          if ((undefined **)*param_2 == &PTR_FUN_01cf10a8) {
            uVar3 = (**(code **)(*param_2 + 0x2c0))(param_2);
            uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),(char)uVar3 == '\0');
          }
          else {
            uVar2 = 0;
          }
          (**(code **)(*param_2 + 0xf0))
                    (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210),uVar2,1,
                     *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
        }
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

