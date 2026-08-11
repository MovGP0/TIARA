/* Ghidra address: 00a0a0c0 */
/* Ghidra symbol: FUN_00a0a0c0 */


void FUN_00a0a0c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_38 [4];
  int local_34;
  int local_2c;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    uVar3 = FUN_00427dd0();
    uVar4 = FUN_00a0a0a0(auStack_78,uVar3,*(undefined4 *)(lVar1 + 0x28));
    if (499 < uVar4) {
      if (*(int *)(lVar1 + 0x28) == 0) {
        *(undefined4 *)(lVar1 + 0x28) = uVar3;
      }
      else {
        *(undefined4 *)(lVar1 + 0x28) = uVar3;
        if (*(int *)(param_1 + 0x20) == 0) {
          local_58 = 0;
          FUN_00498350(local_38,0,0,0);
        }
        else {
          local_58 = *(undefined4 *)(param_1 + 0xa8);
          FUN_00498350(local_38,0,*(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(param_1 + 0x88));
          if (local_2c < *(int *)(lVar1 + 0x2c)) {
            local_2c = *(int *)(param_1 + 0x8c);
          }
        }
        uVar3 = FUN_0040c840((((double)*(int *)(lVar1 + 0x10) +
                              (double)*(int *)(lVar1 + 8) / (double)*(int *)(lVar1 + 0xc)) * 100.0)
                             / (double)*(int *)(lVar1 + 0x14));
        if ((char)uVar3 != *(char *)(lVar1 + 0x24)) {
          *(char *)(lVar1 + 0x24) = (char)uVar3;
          if (*(int *)(param_1 + 0x20) != 0) {
            *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_1 + 0xa8);
          }
          uVar2 = *(undefined8 *)(lVar1 + 0x18);
          pcVar5 = (code *)FUN_00411550(uVar2,0xfffd);
          local_58 = CONCAT31(local_58._1_3_,3 < local_2c - local_34);
          local_50 = local_38;
          local_48 = 0;
          (*pcVar5)(uVar2,uVar2,1,uVar3);
        }
      }
    }
  }
  return;
}

