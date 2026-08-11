/* Ghidra address: 01aa5c30 */
/* Ghidra symbol: FUN_01aa5c30 */


undefined1 FUN_01aa5c30(byte *param_1,undefined8 param_2)

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
  byte local_f0 [100];
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
  uVar7 = (ulonglong)bVar5;
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
  if (((param_1[0x56b] != local_f0[3]) && (param_1[0x568] != local_f0[0])) ||
     ((param_1[0x569] == 1 &&
      (((local_f0[1] == '\0' && (param_1[0x56a] == 1)) && (local_f0[2] == '\0')))))) {
    FUN_004401f0(local_100,0x4f8);
    FUN_004401f0(&local_108,0x4f9);
    FUN_00416ba0(DAT_02110a68,local_100[0],local_108);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if (((((param_1[0x569] == 1) || (local_f0[1] == '\x01')) &&
       ((param_1[0x56a] == 1 || (local_f0[2] == '\x01')))) &&
      ((((((param_1[0x20] == 1 && (param_1[0x56b] == 0)) && (param_1[0x58b] == 1)) ||
         (((param_1[0x20] == 2 && (param_1[0x56b] == 1)) && (local_f0[3] == 0)))) &&
        (bVar5 != local_f0[0])) ||
       ((cVar1 = FUN_01aa1650(param_1[0x20],param_1[0x56b],local_f0[3]), cVar1 != '\0' &&
        (bVar5 != **(byte **)(param_1 + 0x41e8))))))) ||
     (((((param_1[0x569] == 1 && ((local_f0[1] == '\0' && (bVar5 == 1)))) ||
        ((param_1[0x56a] == 1 && ((local_f0[2] == '\0' && (bVar5 == 0)))))) ||
       (((param_1[0x569] == 0 && (local_f0[1] == '\x01')) &&
        (((param_1[0x56a] == 0 || (local_f0[2] == '\0')) && (bVar5 == 0)))))) ||
      ((((param_1[0x56a] == 0 && (local_f0[2] == '\x01')) &&
        ((param_1[0x569] == 0 || (local_f0[1] == '\0')))) && (bVar5 == 1)))))) {
    if (!bVar8) {
      local_8c = (&DAT_01fce3e8)[uVar7];
    }
    if (bVar9) {
      bVar5 = local_8b;
    }
    FUN_01aa3a80(param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar7 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar7] * 8),local_8c);
    FUN_01aa3a80(param_1 + 0xd30,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar7 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar7] * 8),bVar5);
    local_111 = 1;
  }
  else {
    cVar1 = FUN_01aa1680(param_1[0x20],param_1[0x56b],local_f0[3]);
    if (cVar1 != '\0') {
      **(byte **)(param_1 + 0x41e8) = param_1[0x568];
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

