/* Ghidra address: 0083fe70 */
/* Ghidra symbol: FUN_0083fe70 */


bool FUN_0083fe70(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [7];
  char local_99;
  undefined1 local_98 [120];
  
  local_99 = (char)param_1[0xaa];
  if (local_99 == '\0') {
    FUN_00841d10(param_1,local_98);
    (**(code **)(*param_1 + 0x268))
              (param_1,param_2,param_3,&local_99,local_a0,local_a4,local_a8,local_98);
  }
  return local_99 != '\0';
}

