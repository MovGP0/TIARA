/* Ghidra address: 01d70120 */
/* Ghidra symbol: FUN_01d70120 */


undefined8 FUN_01d70120(double param_1,double param_2,char param_3,undefined1 *param_4)

{
  double dVar1;
  undefined8 local_58;
  undefined8 local_50 [7];
  
  dVar1 = (double)FUN_00dd07b0(*param_4);
  FUN_00dd0a10(*param_4,local_50,&local_58,0);
  if (param_2 <= dVar1) {
    if (param_3 == '\x01') {
      local_58 = local_50[0];
    }
  }
  else if (dVar1 < param_1) {
    local_58 = local_50[0];
  }
  return local_58;
}

