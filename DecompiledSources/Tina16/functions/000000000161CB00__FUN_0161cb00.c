/* Ghidra address: 0161cb00 */
/* Ghidra symbol: FUN_0161cb00 */


/* WARNING: Removing unreachable block (ram,0x0161ce80) */

undefined8 FUN_0161cb00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if ((((*(char *)(param_2 + 8) == '\r') ||
       (cVar1 = FUN_01615d20(*(char *)(param_2 + 8)), cVar1 != '\0')) ||
      (*(char *)(param_2 + 8) == '5')) ||
     ((*(char *)(param_2 + 8) == '2' || (*(char *)(param_2 + 8) == '4')))) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  FUN_01614ea0(local_30,*(undefined1 *)(param_2 + 8));
  FUN_00416cd0(local_20,3,local_20[0],local_30[0],&DAT_0161cf7c);
  cVar1 = *(char *)(param_2 + 8);
  if (((cVar1 == '1') || (cVar1 == '2')) || ((cVar1 == '3' || (cVar1 == '4')))) {
    FUN_00416ad0(local_20,&DAT_0161cf8c);
    FUN_00416ad0(local_20,&DAT_0161cf9c);
    FUN_01618cb0(&local_38,*(undefined8 *)(param_2 + 0x10),1);
    FUN_00416ad0(local_20,local_38);
    FUN_00416ad0(local_20,L", n: ");
    FUN_01618cb0(&local_40,*(undefined8 *)(param_2 + 0x18),1);
    FUN_00416ad0(local_20,local_40);
    FUN_00416ad0(local_20,&DAT_0161cfc8);
    FUN_0161c7c0(&local_48,*(undefined8 *)(param_2 + 0x58),param_3,uVar3 & 0xffffffff);
    FUN_00416ad0(local_20,local_48);
  }
  else {
    cVar1 = *(char *)(param_2 + 8);
    if ((cVar1 == '\x16') || (cVar1 == '\x18')) {
      FUN_0043f750(&local_50,*(undefined4 *)(param_2 + 0x20));
      FUN_00416cd0(local_20,4,local_20[0],L"(rel: ",local_50,&DAT_0161cff8);
    }
    else if (cVar1 == '\r') {
      uVar2 = FUN_01612bc0(param_2,1);
      FUN_0161c7c0(&local_70,uVar2,param_3,uVar3 & 0xffffffff);
      FUN_00416ad0(local_20,local_70);
      FUN_0161c7c0(&local_78,*(undefined8 *)(param_2 + 0x58),param_3,uVar3 & 0xffffffff);
      FUN_00416ad0(local_20,local_78);
    }
    else {
      if (0 < *(int *)(*(longlong *)(param_2 + 0x50) + 0x10)) {
        uVar2 = FUN_01612bc0(param_2,1);
        FUN_0161c7c0(&local_58,uVar2,param_3,uVar3 & 0xffffffff);
        FUN_00416ad0(local_20,local_58);
      }
      if (1 < *(int *)(*(longlong *)(param_2 + 0x50) + 0x10)) {
        uVar2 = FUN_01612bc0(param_2,2);
        FUN_0161c7c0(&local_60,uVar2,param_3,uVar3 & 0xffffffff);
        FUN_00416ad0(local_20,local_60);
      }
      FUN_0161c7c0(&local_68,*(undefined8 *)(param_2 + 0x58),param_3,uVar3 & 0xffffffff);
      FUN_00416ad0(local_20,local_68);
    }
  }
  FUN_0043f750(&local_80,*(undefined4 *)(param_2 + 0x60));
  FUN_00416cd0(local_20,3,local_20[0],L", ln: ",local_80);
  if (*(char *)(param_2 + 0x48) != '\0') {
    FUN_01601420(&local_88,*(char *)(param_2 + 0x48));
    FUN_00416cd0(local_20,3,local_20[0],L", disabled: ",local_88);
  }
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414560(&local_88,0xc);
  FUN_00414480(local_20);
  return param_1;
}

