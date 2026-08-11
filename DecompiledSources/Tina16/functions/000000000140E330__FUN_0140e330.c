/* Ghidra address: 0140e330 */
/* Ghidra symbol: FUN_0140e330 */


void FUN_0140e330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [88];
  undefined1 local_1f0 [256];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [2];
  undefined1 local_ca [81];
  undefined1 local_79 [81];
  
  local_258 = 0;
  local_250 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  FUN_01d34d40(*(undefined8 *)(param_1 + 2000));
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,local_e0,0x478);
  FUN_0084e3e0(lVar2,0,0,local_e0[0]);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_e8,0x479);
  FUN_0084e3e0(lVar2,1,0,local_e8);
  *(uint *)(param_1 + 0x7dc) = (uint)*(ushort *)(param_1 + 0x788);
  FUN_00848a70(lVar2,*(int *)(lVar2 + 0x4c0) + (uint)*(ushort *)(param_1 + 0x788));
  iVar5 = *(int *)(param_1 + 0x7dc);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01408750(&local_f0,*(undefined2 *)(*(longlong *)(param_1 + 0x790) + (longlong)iVar4 * 2),
                   *(undefined2 *)(param_1 + 0x78a),*(undefined4 *)(param_1 + 0x7e0),0);
      FUN_00416910(local_1f0,local_f0,0xff);
      FUN_00415020(local_ca,local_1f0,0x50);
      FUN_01aa0d10(local_248,iVar4,4,1);
      FUN_00415020(local_79,local_248,0x50);
      FUN_004169a0(&local_250,local_ca);
      FUN_0140e7a0(*(undefined8 *)(param_1 + 2000),local_250);
      iVar1 = *(int *)(param_1 + 0x7e0);
      if (iVar1 == 0) {
        uVar3 = FUN_0140e880(*(undefined8 *)(param_1 + 2000),iVar4);
        local_260 = FUN_00b08760(&PTR_FUN_0142e0d8,1,uVar3,0);
      }
      else if (iVar1 == 1) {
        uVar3 = FUN_0140e880(*(undefined8 *)(param_1 + 2000),iVar4);
        local_260 = FUN_00b08760(&PTR_FUN_0142e230,1,uVar3,0);
      }
      else if (iVar1 == 2) {
        uVar3 = FUN_0140e880(*(undefined8 *)(param_1 + 2000),iVar4);
        local_260 = FUN_00b08760(&PTR_FUN_0142e388,1,uVar3,0);
      }
      FUN_01433dc0(local_260,*(undefined2 *)(param_1 + 0x7ec),*(undefined2 *)(param_1 + 0x7ee));
      FUN_004169a0(&local_258,local_79);
      FUN_00b0ab70(lVar2,local_258,local_260);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_258,2);
  FUN_00414560(&local_f0,3);
  return;
}

