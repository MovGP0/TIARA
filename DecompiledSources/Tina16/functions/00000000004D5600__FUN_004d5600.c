/* Ghidra address: 004d5600 */
/* Ghidra symbol: FUN_004d5600 */


undefined4 FUN_004d5600(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  local_c = 0;
  if (param_2 != 0) {
    FUN_0040d200(param_2,0x50,0);
    *(undefined4 *)(param_2 + 8) = 2;
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(undefined4 *)(param_2 + 0x34) = 1;
  }
  return local_c;
}

