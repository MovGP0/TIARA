/* Ghidra address: 018567d0 */
/* Ghidra symbol: FUN_018567d0 */


undefined8 FUN_018567d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_94 [40];
  int local_6c;
  
  uVar4 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (0x6b < lVar2 - lVar3) {
    iVar1 = FUN_004b6da0(param_2);
    FUN_004b84c0(param_2,local_94,0x6c);
    FUN_004b6dc0(param_2,(longlong)iVar1);
    if (local_6c == 0x464d4520) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

