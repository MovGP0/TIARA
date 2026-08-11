/* Ghidra address: 0089c7c0 */
/* Ghidra symbol: FUN_0089c7c0 */


void FUN_0089c7c0(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)*DAT_01e23f28)(DAT_01e23f28);
  uVar1 = DAT_01e23f08;
  if ((DAT_01e23f20 != 0) && (DAT_01e23f20 = DAT_01e23f20 + -1, DAT_01e23f20 == 0)) {
    local_20 = DAT_01e23f08;
    DAT_01e23f08 = 0;
    FUN_00410f20(uVar1);
  }
  (**(code **)(*DAT_01e23f28 + 8))(DAT_01e23f28);
  return;
}

