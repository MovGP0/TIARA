/* Ghidra address: 00978170 */
/* Ghidra symbol: FUN_00978170 */


void FUN_00978170(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 *local_30 [2];
  
  if ((char)param_1[0xf] != '\0') {
    local_30[0] = &LAB_009781d0;
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,local_30,0,0);
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_009780f0(param_1,0xe,param_3);
  }
  return;
}

