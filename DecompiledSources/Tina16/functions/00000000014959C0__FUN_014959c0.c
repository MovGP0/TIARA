/* Ghidra address: 014959c0 */
/* Ghidra symbol: FUN_014959c0 */


undefined4 FUN_014959c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  undefined1 local_160 [48];
  undefined8 local_130;
  undefined1 local_128 [256];
  
  local_190 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_170[0] = 0;
  local_178 = 0;
  local_130 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xbe0) + 0x90))(*(longlong **)(param_1 + 0xbe0));
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar4 = 0;
  if (*(int *)(lVar1 + 0x4e0) - 2U < 0x80000000) {
    iVar6 = *(int *)(lVar1 + 0x4e0) + -1;
    do {
      iVar5 = iVar4 + 1;
      FUN_0084e320(lVar1,&local_178,0,iVar5);
      FUN_0043ea00(local_170,local_178);
      FUN_00416910(local_128,local_170[0]);
      cVar2 = FUN_014937c0(param_1,iVar5);
      if (cVar2 == '\0') {
        FUN_0084e320(lVar1,&local_130,1,iVar5);
        FUN_004169a0(&local_180,local_128);
        uVar7 = FUN_014956b0(param_1,local_180,local_130);
        if (*(char *)(param_1 + 0xba1) != '\0') {
          *(undefined1 *)(param_1 + 0xba1) = 0;
          local_19c = 1;
          goto LAB_01495c23;
        }
        FUN_010c7a40(local_160,uVar7);
        if (*(int *)(param_1 + 0xc08) == 1) {
          FUN_004169a0(&local_188,local_128);
          FUN_013bbc00(*(undefined8 *)(param_1 + 0xc00),local_188);
        }
        else {
          lVar3 = FUN_013b3ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),local_128);
          if (lVar3 == 0) {
            FUN_013b3040(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4e8),local_128);
          }
          else {
            FUN_013b4630(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),local_128,local_160
                         ,*(undefined1 *)(*(longlong *)(param_1 + 0x930) + 0x509));
          }
        }
        FUN_004154b0(&local_190,local_128);
        FUN_004155b0(&local_190,&LAB_01495cac);
        FUN_00416880(&local_198,local_190);
        FUN_00416ad0(&local_198,local_130);
        (**(code **)(**(longlong **)(param_1 + 0xbe0) + 0x78))
                  (*(longlong **)(param_1 + 0xbe0),local_198);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_19c = 0;
LAB_01495c23:
  FUN_00414480(&local_198);
  FUN_004144d0(&local_190);
  FUN_00414560(&local_188,4);
  FUN_00414480(&local_130);
  return local_19c;
}

