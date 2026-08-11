/* Ghidra address: 00ddf020 */
/* Ghidra symbol: FUN_00ddf020 */


undefined8 FUN_00ddf020(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00ddd3d0(param_1);
  FUN_0041b890(&local_10,*(undefined8 *)(param_1 + 0x4b0),&LAB_00ddf098);
  FUN_00468a90(param_2,local_10);
  FUN_0041b800(&local_10);
  return param_2;
}

