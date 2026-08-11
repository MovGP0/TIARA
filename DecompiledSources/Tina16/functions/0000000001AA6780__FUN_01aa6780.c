/* Ghidra address: 01aa6780 */
/* Ghidra symbol: FUN_01aa6780 */


undefined1 FUN_01aa6780(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_111;
  undefined8 local_108;
  undefined8 local_100 [2];
  byte local_f0 [100];
  char local_8c;
  byte local_8b;
  
  local_100[0] = 0;
  local_108 = 0;
  if (param_1[0x5a9] == 0) {
    bVar4 = param_1[0x5a8];
  }
  else {
    bVar4 = param_1[(ulonglong)param_1[0x5a9] * 0x18 + 0x5a0];
  }
  bVar7 = false;
  bVar8 = false;
  iVar2 = 1;
  uVar5 = (uint)*param_1;
  if (uVar5 != 0) {
    pbVar3 = local_f0;
    do {
      *pbVar3 = param_1[(longlong)iVar2 + 0x587];
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),&local_8c,2);
    bVar7 = local_8c != '\x04';
    bVar8 = local_8b != 4;
  }
  if ((param_1[0x56b] != local_f0[3]) &&
     ((param_1[0x568] != local_f0[0] || (param_1[0x569] != local_f0[1])))) {
    FUN_004401f0(local_100,0x4fa);
    FUN_004401f0(&local_108,0x4f9);
    FUN_00416ba0(DAT_02110a68,local_100[0],local_108);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if ((((param_1[0x56a] == 1) || (local_f0[2] == '\x01')) &&
      (((((param_1[0x20] == 1 && ((param_1[0x56b] == 0 && (local_f0[3] == 1)))) ||
         ((param_1[0x20] == 2 && ((param_1[0x56b] == 1 && (local_f0[3] == 0)))))) &&
        (((bVar4 == 0 && (local_f0[0] == 1)) || ((bVar4 == 1 && (local_f0[1] == 1)))))) ||
       (((param_1[0x20] == 3 && ((param_1[0x56b] == 1 && (local_f0[3] == 0)))) &&
        (((bVar4 == 0 && (**(char **)(param_1 + 0x41e8) == '\x01')) ||
         ((bVar4 == 1 && (*(char *)(*(longlong *)(param_1 + 0x41e8) + 1) == '\x01')))))))))) ||
     ((param_1[0x56a] == 1 && ((local_f0[2] == '\0' && (bVar4 == 0)))))) {
    if (!bVar7) {
      local_8c = (&DAT_01fce3e8)[bVar4];
    }
    bVar1 = bVar4;
    if (bVar8) {
      bVar1 = local_8b;
    }
    uVar6 = (ulonglong)bVar4;
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar6 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar6] * 8),local_8c);
    FUN_01aa3960(param_1,2,param_1 + 0xd30,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar6 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar6] * 8),bVar1);
    local_111 = 1;
  }
  else {
    if (((param_1[0x20] == 3) && (param_1[0x56b] == 0)) && (local_f0[3] == 1)) {
      pbVar3 = *(byte **)(param_1 + 0x41e8);
      *pbVar3 = param_1[0x568];
      pbVar3[1] = param_1[0x569];
    }
    local_111 = 0;
  }
  bVar4 = *param_1;
  bVar1 = 1;
  if (bVar4 != 0) {
    pbVar3 = local_f0;
    do {
      param_1[(ulonglong)bVar1 + 0x567] = *pbVar3;
      bVar1 = bVar1 + 1;
      pbVar3 = pbVar3 + 1;
      bVar4 = bVar4 - 1;
    } while (bVar4 != 0);
  }
  FUN_00414560(&local_108,2);
  return local_111;
}

