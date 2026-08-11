/* Ghidra address: 013baff0 */
/* Ghidra symbol: FUN_013baff0 */


longlong * FUN_013baff0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  
  local_170 = 0;
  local_178 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_2 + 0x438);
  plVar3 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  iVar2 = (**(code **)(*plVar1 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(plVar1,&local_48,iVar5);
      FUN_0043ea00(local_40,local_48);
      if (local_40[0] != 0) {
        FUN_004b5390(plVar1,&local_58,iVar5);
        FUN_0043ea00(&local_50,local_58);
        if (local_50 != 0) {
          FUN_004b3cf0(plVar1,&local_68,iVar5);
          FUN_0043e130(&local_60,local_68);
          FUN_00416910(local_168,local_60,0xff);
          lVar4 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_168,0);
          FUN_004b5390(plVar1,&local_178,iVar5);
          FUN_0043e130(&local_30,local_178);
          FUN_00456a50(&local_30,&local_170,&DAT_013bb29c,0,1);
          FUN_00415dd0(lVar4 + 0x10,local_170,0);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          (**(code **)(*plVar3 + 0x50))(plVar3,lVar4);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x438);
  FUN_00414560(&local_178,2);
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_30);
  return plVar3;
}

