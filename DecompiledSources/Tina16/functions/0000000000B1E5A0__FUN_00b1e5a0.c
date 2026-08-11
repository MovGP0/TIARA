/* Ghidra address: 00b1e5a0 */
/* Ghidra symbol: FUN_00b1e5a0 */


undefined8 FUN_00b1e5a0(undefined8 param_1,short *param_2,undefined2 param_3,undefined8 param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  short *local_90;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  short *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong local_20;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_82 = param_3;
  local_80 = param_4;
  FUN_00414520(param_1);
  cVar2 = FUN_0046c3b0(local_90);
  if ((cVar2 != '\0') || (cVar2 = FUN_0046c3d0(local_90), cVar2 != '\0')) goto LAB_00b1e885;
  local_48 = local_90;
  sVar1 = *local_90;
  if (sVar1 != 8) {
    if (sVar1 == 0xb) {
      FUN_00468820(&local_68,1);
      cVar2 = FUN_0046f320(local_90,&local_68);
      if (cVar2 == '\0') {
        FUN_00414b90(local_98,L"FALSE");
      }
      else {
        FUN_00414b90(local_98,L"TRUE");
      }
      goto LAB_00b1e885;
    }
    if (sVar1 == 0x100) {
      FUN_00466730(&local_50,local_90,0);
      FUN_00b15390(local_98,local_50);
      goto LAB_00b1e885;
    }
    if (sVar1 != 0x102) {
      FUN_00414be0(&local_20,local_80);
      FUN_00461840(&local_38,local_90);
      iVar3 = FUN_00416420(local_20,0);
      if (iVar3 == 0) {
        FUN_00b1f3d0(&local_20,local_82);
      }
      iVar3 = FUN_00417170(&DAT_00b1e958,local_20,1);
      if ((iVar3 == 1) && (iVar3 = FUN_00417170(&DAT_00b1e964,local_20,1), 0 < iVar3)) {
        uVar4 = 0;
        if (local_20 != 0) {
          uVar4 = *(uint *)(local_20 + -4) >> 1;
        }
        FUN_00416430(&local_20,local_20,iVar3 + 1,uVar4 - iVar3);
      }
      FUN_00b1c810(&local_40,local_20);
      iVar3 = FUN_00415a60(local_40,"general");
      if ((iVar3 == 0) || (iVar3 = FUN_00415a60(local_40,&DAT_00b1e988), iVar3 == 0)) {
        FUN_00414520(&local_20);
      }
      if ((sVar1 == 7) && (iVar3 = FUN_00415a60(local_40,&DAT_00b1e99c), iVar3 != 0)) {
        FUN_004168e0(&local_20,*(undefined8 *)(PTR_DAT_02004830 + 0x10));
        FUN_00414c70(&local_40,&DAT_00b1e99c);
      }
      iVar3 = FUN_00415a60(local_40,&DAT_00b1e99c);
      if (iVar3 == 0) {
        uVar5 = FUN_00464c60(&local_38);
        FUN_00b1cdf0(auStack_b8,&local_70,uVar5);
        FUN_00414b90(local_98,local_70);
      }
      else {
        uVar5 = FUN_00464c60(&local_38);
        FUN_00b1d6f0(auStack_b8,&local_78,uVar5);
        FUN_00414b90(local_98,local_78);
      }
      goto LAB_00b1e885;
    }
  }
  FUN_00467310(local_98,local_90);
LAB_00b1e885:
  FUN_004145c0(&local_78,2);
  FUN_00460ba0(&local_68);
  FUN_004144d0(&local_50);
  FUN_004144d0(&local_40);
  FUN_00460ba0(&local_38);
  FUN_00414520(&local_20);
  return local_98;
}

