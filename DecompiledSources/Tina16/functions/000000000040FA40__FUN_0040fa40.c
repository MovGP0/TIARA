/* Ghidra address: 0040fa40 */
/* Ghidra symbol: FUN_0040fa40 */


void FUN_0040fa40(double param_1,int param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  double dVar5;
  double local_res8 [4];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 uStack_40;
  undefined8 local_32;
  undefined2 local_2a;
  
  local_res8[0] = param_1;
  uVar1 = FUN_0040f8d0(local_res8);
  *param_4 = uVar1;
  *param_3 = 0x30;
  dVar5 = (double)FUN_0040c850(local_res8[0]);
  lVar3 = FUN_0040c770(dVar5 * 1e+17);
  local_res8[0] = (double)lVar3;
  if (1e+18 <= local_res8[0]) {
    local_res8[0] = local_res8[0] - 1e+18;
    *param_3 = 0x31;
    param_2 = param_2 + -1;
  }
  FUN_0040f980(auStack_68,&local_48,local_res8[0]);
  local_32 = local_48;
  local_2a = uStack_40;
  iVar2 = 8;
  pbVar4 = (byte *)&local_2a;
  do {
    *(ushort *)(param_3 + (iVar2 * -2 + 0x11)) =
         (ushort)(*pbVar4 & 0xf) * 0x100 + (ushort)(*pbVar4 >> 4) + 0x3030;
    iVar2 = iVar2 + -1;
    pbVar4 = pbVar4 + -1;
  } while (iVar2 != -1);
  param_3[0x13] = 0;
  if (param_2 < 0x13) {
    FUN_0040f940(param_3,param_2);
  }
  return;
}

