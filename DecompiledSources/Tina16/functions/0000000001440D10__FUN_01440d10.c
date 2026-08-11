/* Ghidra address: 01440d10 */
/* Ghidra symbol: FUN_01440d10 */


void FUN_01440d10(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_1c8 [88];
  undefined8 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51 [41];
  
  local_170 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar2 = FUN_004095c0(0x80);
  if (lVar2 == 0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    *(longlong *)(param_1 + 0xa8) = lVar2;
    uVar3 = FUN_0172dba0(&PTR_FUN_01729b58,1,param_2,0,*(undefined8 *)(param_3 + 0xe90),1);
    iVar5 = 1;
    do {
      lVar6 = (longlong)iVar5;
      *(undefined1 *)(lVar2 + -0x3e + lVar6 * 0x40) = 0;
      *(short *)(lVar2 + -0x40 + lVar6 * 0x40) = *(short *)(param_3 + 0x10) + (short)iVar5;
      FUN_0172ddd0(uVar3,&local_68,iVar5 + -1);
      FUN_019b9b80(&local_60,local_68);
      FUN_00416910(local_168,local_60,0xff);
      FUN_00415020(lVar2 + -0x30 + lVar6 * 0x40,local_168,0x28);
      puVar4 = (undefined8 *)FUN_01cfde70(param_2,1,iVar5,&local_52,&local_53,&local_54);
      *(undefined8 *)(lVar2 + -0x38 + lVar6 * 0x40) = *puVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    FUN_00410f20(uVar3);
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 2;
    (**(code **)(*param_2 + 0x288))(param_2,&local_170);
    FUN_00416910(local_168,local_170,0xff);
    FUN_00415020(local_51,local_168,0x28);
    cVar1 = FUN_019b7680(local_51,param_3);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_3 + 0xb3e) = 1;
    }
    else {
      FUN_00414ff0(local_1c8,local_51);
      FUN_00415110(local_1c8,lVar2 + 0x10,0x50);
      FUN_00415020(lVar2 + 0x10,local_1c8,0x28);
      FUN_00414ff0(local_1c8,local_51);
      FUN_00415110(local_1c8,lVar2 + 0x50,0x50);
      FUN_00415020(lVar2 + 0x50,local_1c8,0x28);
    }
  }
  FUN_00414480(&local_170);
  FUN_00414560(&local_68,2);
  return;
}

