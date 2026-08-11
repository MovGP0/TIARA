/* Ghidra address: 01b79750 */
/* Ghidra symbol: FUN_01b79750 */


undefined8 FUN_01b79750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_20 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_00654c00(param_2);
    if (iVar1 <= iVar3) {
code_r0x01b797bd:
      FUN_00414480(local_res18);
      return local_20;
    }
    lVar2 = FUN_00654bc0(param_2,iVar3);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),local_res18[0]);
    if (iVar1 == 0) {
      local_20 = FUN_00654bc0(param_2,iVar3);
      goto code_r0x01b797bd;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

