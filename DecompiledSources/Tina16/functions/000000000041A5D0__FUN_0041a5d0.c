/* Ghidra address: 0041a5d0 */
/* Ghidra symbol: FUN_0041a5d0 */


longlong * FUN_0041a5d0(longlong *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  short local_22;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_30 = param_1;
  local_22 = param_2;
  FUN_00406df0(&DAT_0200af00);
  if (DAT_0200af28 == local_22) {
    FUN_00416830(local_30,u_en_US_en_de_DE_de__0200af2a,0x55);
    FUN_00406e00(&DAT_0200af00);
  }
  else {
    FUN_00406e00(&DAT_0200af00);
    FUN_00414480(local_30);
    iVar2 = thunk_FUN_040522a9(local_22,2);
    if (iVar2 != 0) {
      if (DAT_0200aef8 == '\0') {
        FUN_0041a1b0(auStack_58,&local_18,local_22);
        FUN_00414ad0(local_30,local_18);
        sVar1 = thunk_FUN_0413b284();
        if (local_22 != sVar1) {
          if (*local_30 != 0) {
            FUN_00416ad0(local_30,&LAB_0041a788);
          }
          uVar3 = thunk_FUN_0413b284();
          FUN_0041a1b0(auStack_58,&local_20,uVar3);
          FUN_00416ad0(local_30,local_20);
        }
      }
      else {
        FUN_0041a460(auStack_58,&local_10,local_22);
        FUN_00414ad0(local_30,local_10);
      }
    }
    FUN_00406df0(&DAT_0200af00);
    DAT_0200af28 = local_22;
    uVar4 = FUN_00416740(*local_30);
    FUN_00419fa0(u_en_US_en_de_DE_de__0200af2a,0xaa,uVar4);
    FUN_00406e00(&DAT_0200af00);
  }
  FUN_00414560(&local_20,3);
  return local_30;
}

