/* Ghidra address: 00f60710 */
/* Ghidra symbol: FUN_00f60710 */


undefined8 FUN_00f60710(undefined8 *param_1,undefined8 *param_2,double param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_1;
  local_18 = (int)*param_2;
  uVar3 = local_10 - local_18 >> 0x1f;
  if ((param_3 <= (double)(int)((local_10 - local_18 ^ uVar3) - uVar3)) ||
     (uStack_c = (int)((ulonglong)*param_1 >> 0x20), uStack_14 = (int)((ulonglong)*param_2 >> 0x20),
     uVar3 = uStack_c - uStack_14 >> 0x1f, iVar1 = (uStack_c - uStack_14 ^ uVar3) - uVar3,
     param_3 <= (double)iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

