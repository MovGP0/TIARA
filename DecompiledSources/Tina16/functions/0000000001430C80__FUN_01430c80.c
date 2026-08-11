/* Ghidra address: 01430c80 */
/* Ghidra symbol: FUN_01430c80 */


/* WARNING: Removing unreachable block (ram,0x01430ca2) */

undefined8 FUN_01430c80(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (cVar1 == '\0') {
    FUN_01430ac0(param_1,param_2);
  }
  else {
    (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],param_2,cVar1);
  }
  return param_2;
}

