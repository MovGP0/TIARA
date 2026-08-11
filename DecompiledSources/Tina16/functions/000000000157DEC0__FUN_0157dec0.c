/* Ghidra address: 0157dec0 */
/* Ghidra symbol: FUN_0157dec0 */


undefined8 FUN_0157dec0(longlong *param_1,undefined8 param_2)

{
  if ((char)param_1[1] == '\0') {
    param_1 = (longlong *)FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02001f60);
    FUN_004134c0();
  }
  (**(code **)(*param_1 + 8))(param_1,param_2);
  return param_2;
}

