/* Ghidra address: 015e3930 */
/* Ghidra symbol: FUN_015e3930 */


undefined1 FUN_015e3930(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_d8;
  char *local_d0;
  longlong *local_c8;
  undefined1 local_b9;
  undefined8 local_b8 [19];
  
  puVar3 = param_3;
  puVar4 = local_b8;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(local_b8);
  local_c8 = (longlong *)
             FUN_01596170(&DAT_01595c18,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                          param_2,*(undefined8 *)(param_1 + 0x1a8),*(ushort *)(param_1 + 0x188) / 2,
                          1000);
  FUN_015962e0(local_c8,(uint)*(ushort *)(param_1 + 0x188) * 2 + 2,&local_d8);
  local_d0 = (char *)FUN_004095c0(2);
  *local_d0 = *(char *)(local_d8 + (ulonglong)((uint)*(ushort *)(param_1 + 0x188) * 2));
  uVar2 = (uint)*(ushort *)(param_1 + 0x188) * 2 + 1;
  local_d0[1] = *(char *)(local_d8 + (ulonglong)uVar2);
  if ((**(char **)(param_1 + 0x1a0) == *local_d0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1a0) + 1) == local_d0[1])) {
    local_b9 = 1;
  }
  else {
    local_b9 = 0;
  }
  (**(code **)(*local_c8 + -0x20))(local_c8,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
  FUN_004095f0(local_d8);
  FUN_004095f0(local_d0);
  FUN_00417740(local_b8,&DAT_015b9418);
  return local_b9;
}

