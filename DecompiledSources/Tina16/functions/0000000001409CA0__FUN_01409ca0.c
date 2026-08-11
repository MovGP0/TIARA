/* Ghidra address: 01409ca0 */
/* Ghidra symbol: FUN_01409ca0 */


void FUN_01409ca0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_258;
  int local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [88];
  undefined1 local_1e0 [256];
  undefined8 local_e0 [2];
  undefined1 local_ca [81];
  undefined1 local_79 [81];
  
  local_248 = 0;
  local_240 = 0;
  local_e0[0] = 0;
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x728));
  FUN_0084e3e0(lVar2,0,0,L"Address");
  FUN_0084e3e0(lVar2,1,0,L"Value");
  *(uint *)(param_1 + 0x734) = (uint)*(ushort *)(param_1 + 0x718);
  FUN_00848a70(lVar2,*(int *)(lVar2 + 0x4c0) + (uint)*(ushort *)(param_1 + 0x718));
  FUN_00c42670(0x4000000000000000,(double)*(ushort *)(param_1 + 0x71a));
  uVar3 = FUN_0040c840();
  iVar5 = *(int *)(param_1 + 0x734);
  local_250 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01408750(local_e0,*(undefined2 *)
                             (*(longlong *)(param_1 + 0x720) + (longlong)local_250 * 2),
                   *(undefined2 *)(param_1 + 0x71a),*(undefined4 *)(param_1 + 0x738),0);
      FUN_00416910(local_1e0,local_e0[0],0xff);
      FUN_00415020(local_ca,local_1e0,0x50);
      FUN_01aa0d10(local_238,local_250,4,1);
      FUN_00415020(local_79,local_238,0x50);
      FUN_004169a0(&local_240,local_ca);
      FUN_01408b50(*(undefined8 *)(param_1 + 0x728),local_240);
      iVar1 = *(int *)(param_1 + 0x738);
      if (iVar1 == 0) {
        uVar4 = FUN_01408ca0(*(undefined8 *)(param_1 + 0x728),local_250);
        local_258 = FUN_00b08760(&PTR_FUN_0142e0d8,1,uVar4,0);
      }
      else if (iVar1 == 1) {
        uVar4 = FUN_01408ca0(*(undefined8 *)(param_1 + 0x728),local_250);
        local_258 = FUN_00b08760(&PTR_FUN_0142e230,1,uVar4,0);
      }
      else if (iVar1 == 2) {
        uVar4 = FUN_01408ca0(*(undefined8 *)(param_1 + 0x728),local_250);
        local_258 = FUN_00b08760(&PTR_FUN_0142e388,1,uVar4,0);
      }
      FUN_01433dc0(local_258,0,uVar3);
      FUN_004169a0(&local_248,local_79);
      FUN_00b0ab70(lVar2,local_248,local_258);
      local_250 = local_250 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00b0b140(lVar2,1,2);
  FUN_00414560(&local_248,2);
  FUN_00414480(local_e0);
  return;
}

