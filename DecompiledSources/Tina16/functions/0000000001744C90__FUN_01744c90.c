/* Ghidra address: 01744c90 */
/* Ghidra symbol: FUN_01744c90 */


undefined8 * FUN_01744c90(undefined8 param_1,undefined8 *param_2,char param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3 == '\x01') {
    FUN_00498350(&local_38,0x10,8,0x28,0x20);
  }
  else if (param_3 == '\x02') {
    FUN_00498350(&local_38,0x30,8,0x48,0x20);
  }
  else if (param_3 == '\x03') {
    FUN_00498350(&local_38,0x10,0x28,0x28,0x40);
  }
  else if (param_3 == '\x04') {
    FUN_00498350(&local_38,0x30,0x28,0x48,0x40);
  }
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}

