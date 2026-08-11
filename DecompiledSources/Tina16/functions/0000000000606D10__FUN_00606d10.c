/* Ghidra address: 00606d10 */
/* Ghidra symbol: FUN_00606d10 */


undefined8 FUN_00606d10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int local_84 [10];
  int local_5c;
  
  iVar1 = (**(code **)*param_2)(param_2);
  iVar2 = FUN_004b6da0(param_2);
  if (0x6c < iVar1 - iVar2) {
    (**(code **)(*param_2 + 0x18))(param_2,local_84,0x6c);
    (**(code **)(*param_2 + 0x48))(param_2,0xffffff94,1);
    if ((local_84[0] == 1) && (local_5c == 0x464d4520)) {
      return 1;
    }
  }
  return 0;
}

