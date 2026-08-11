/* Ghidra address: 01d865a0 */
/* Ghidra symbol: FUN_01d865a0 */


undefined8
FUN_01d865a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ushort param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_1c [3];
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_1c[0] = (uint)param_5;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_01138e40(*(undefined8 *)(param_1 + 0x60),&local_res10,&local_res18,&local_res20,local_1c,
                 param_6,param_7,param_8);
  }
  return 0;
}

