/* Ghidra address: 01aa6360 */
/* Ghidra symbol: FUN_01aa6360 */


undefined1 FUN_01aa6360(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_111;
  undefined8 local_108;
  undefined8 local_100 [2];
  byte local_f0 [4];
  byte local_ec;
  char local_8c;
  byte local_8b;
  
  local_100[0] = 0;
  local_108 = 0;
  if (param_1[0x5a9] == 0) {
    bVar5 = param_1[0x5a8];
  }
  else {
    bVar5 = param_1[(ulonglong)param_1[0x5a9] * 0x18 + 0x5a0];
  }
  bVar8 = false;
  bVar9 = false;
  iVar3 = 1;
  uVar6 = (uint)*param_1;
  if (uVar6 != 0) {
    pbVar4 = local_f0;
    do {
      *pbVar4 = param_1[(longlong)iVar3 + 0x587];
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_1[0x563] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] != 0) {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),&local_8c,2);
    bVar8 = local_8c != '\x04';
    bVar9 = local_8b != 4;
  }
  if (((((param_1[0x56a] == 1) && (local_f0[2] == '\0')) && (param_1[0x56b] == 1)) &&
      (local_f0[3] == '\0')) ||
     ((param_1[0x56c] != local_ec &&
      ((param_1[0x568] != local_f0[0] || (param_1[0x569] != local_f0[1])))))) {
    FUN_004401f0(local_100,0x4fa);
    FUN_004401f0(&local_108,0x4f9);
    FUN_00416ba0(DAT_02110a68,local_100[0],local_108);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if (((((param_1[0x56a] == 1) || (local_f0[2] == '\x01')) &&
       ((param_1[0x56b] == 1 || (local_f0[3] == '\x01')))) &&
      ((((((param_1[0x20] == 1 && (param_1[0x56c] == 0)) && (local_ec == 1)) ||
         (((param_1[0x20] == 2 && (param_1[0x56c] == 1)) && (local_ec == 0)))) &&
        (((bVar5 == 0 && (local_f0[0] == 1)) || ((bVar5 == 1 && (local_f0[1] == 1)))))) ||
       ((cVar1 = FUN_01aa1650(param_1[0x20],param_1[0x56c],local_ec), cVar1 != '\0' &&
        (((bVar5 == 0 && (**(char **)(param_1 + 0x41e8) == '\x01')) ||
         ((bVar5 == 1 && (*(char *)(*(longlong *)(param_1 + 0x41e8) + 1) == '\x01')))))))))) ||
     ((((((param_1[0x56a] == 1 && (local_f0[2] == '\0')) && (bVar5 == 1)) ||
        (((param_1[0x56b] == 1 && (local_f0[3] == '\0')) && (bVar5 == 0)))) ||
       (((param_1[0x56a] == 0 && (local_f0[2] == '\x01')) &&
        (((param_1[0x56b] == 0 || (local_f0[3] == '\0')) && (bVar5 == 0)))))) ||
      ((((param_1[0x56b] == 0 && (local_f0[3] == '\x01')) &&
        ((param_1[0x56a] == 0 || (local_f0[2] == '\0')))) && (bVar5 == 1)))))) {
    if (!bVar8) {
      local_8c = (&DAT_01fce3e8)[bVar5];
    }
    bVar2 = bVar5;
    if (bVar9) {
      bVar2 = local_8b;
    }
    uVar7 = (ulonglong)bVar5;
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar7 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar7] * 8),local_8c);
    FUN_01aa3960(param_1,2,param_1 + 0xd30,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar7 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar7] * 8),bVar2);
    local_111 = 1;
  }
  else {
    cVar1 = FUN_01aa1680(param_1[0x20],param_1[0x56c],local_ec);
    if (cVar1 != '\0') {
      pbVar4 = *(byte **)(param_1 + 0x41e8);
      *pbVar4 = param_1[0x568];
      pbVar4[1] = param_1[0x569];
    }
    local_111 = 0;
  }
  bVar5 = *param_1;
  bVar2 = 1;
  if (bVar5 != 0) {
    pbVar4 = local_f0;
    do {
      param_1[(ulonglong)bVar2 + 0x567] = *pbVar4;
      bVar2 = bVar2 + 1;
      pbVar4 = pbVar4 + 1;
      bVar5 = bVar5 - 1;
    } while (bVar5 != 0);
  }
  FUN_00414560(&local_108,2);
  return local_111;
}

