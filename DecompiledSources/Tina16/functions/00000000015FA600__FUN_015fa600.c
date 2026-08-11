/* Ghidra address: 015fa600 */
/* Ghidra symbol: FUN_015fa600 */


undefined1 FUN_015fa600(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar8;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460 [65];
  undefined1 local_251 [513];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 uVar7;
  
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_468 = 0;
  local_460[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_50 = 0;
  FUN_00417600(&local_48,&DAT_00401390,2);
  uVar7 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(*(longlong *)(param_2 + 0x9b8) + 0x10);
    iVar5 = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x9b8),iVar5);
        FUN_01565cf0(lVar2,local_460);
        FUN_00415dd0(&local_50,local_460[0],0);
        uVar6 = uVar7;
        if (*(char *)(lVar2 + 0x38) == '\0') {
          FUN_004425e0(local_251,local_50);
          uVar3 = _get_lcd_string(param_1,local_251);
          FUN_00415430(&local_468,uVar3,0);
          FUN_00416880(&local_48,local_468);
          uVar3 = _get_lcd_string2(param_1,local_251);
          FUN_00415430(&local_470,uVar3,0);
          FUN_00416880(&local_40,local_470);
          FUN_01565d10(lVar2,&local_478,0);
          iVar1 = FUN_00416db0(local_478,local_48);
          if (iVar1 == 0) {
            FUN_01565d10(lVar2,&local_480);
            iVar1 = FUN_00416db0(local_480,local_40);
            if (iVar1 == 0) goto LAB_015fa88e;
          }
          FUN_01565d10(lVar2,&local_488,0);
          iVar1 = FUN_00416db0(local_488,local_48);
          if (iVar1 != 0) {
            FUN_01565d50(lVar2,0,local_48);
          }
          FUN_01565d10(lVar2,&local_490,1);
          iVar1 = FUN_00416db0(local_490,local_40);
          if (iVar1 != 0) {
            FUN_01565d50(lVar2,1,local_40);
          }
          uVar3 = FUN_01565d40(lVar2);
          FUN_00416cd0(&local_38,3,local_48,L"xx%%yy$$zz",local_40);
          FUN_01d04b50(uVar3,&local_38);
          uVar4 = FUN_019a45d0();
          uVar4 = FUN_0198d430(uVar4);
          FUN_01d04aa0(uVar3,uVar4);
          uVar6 = 1;
        }
LAB_015fa88e:
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + -1;
        uVar7 = uVar6;
      } while (iVar8 != 0);
    }
  }
  FUN_00414560(&local_490,4);
  FUN_00414590(&local_470,2);
  FUN_00414480(local_460);
  FUN_004144d0(&local_50);
  FUN_00417840(&local_48,&DAT_00401390,2);
  FUN_00414560(&local_38,2);
  return uVar6;
}

