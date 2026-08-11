/* Ghidra address: 01478380 */
/* Ghidra symbol: FUN_01478380 */


void FUN_01478380(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_180;
  undefined1 local_178 [256];
  undefined1 local_78 [48];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_180 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x298) + 0x90))(*(longlong **)(param_1 + 0x298));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x28))(*(longlong **)(param_1 + 0x290));
  if (iVar1 < 1) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 8);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x290);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30,iVar3);
      FUN_01477740(local_30,&local_38,&local_40,&local_48);
      uVar5 = FUN_01478260(param_1,local_38,local_40);
      FUN_010c7a40(local_78,uVar5);
      if (*(int *)(param_1 + 0x2b0) == 1) {
        FUN_013bbc00(*(undefined8 *)(param_1 + 0x2a8),local_38,local_78);
      }
      else {
        FUN_00416910(local_178,local_38,0xff);
        lVar2 = FUN_013b3ad0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),local_178);
        if (lVar2 == 0) {
          FUN_00416910(local_178,local_38,0xff);
          FUN_013b3040(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4e8),local_178,local_78);
        }
        else {
          lVar2 = *(longlong *)(param_1 + 8);
          FUN_00416910(local_178,local_38,0xff);
          FUN_013b4630(*(undefined8 *)(lVar2 + 0x550),local_178,local_78,
                       *(undefined1 *)(lVar2 + 0x509));
        }
      }
      FUN_00416cd0(&local_180,3,local_38,&DAT_0147862c,local_40);
      (**(code **)(**(longlong **)(param_1 + 0x298) + 0x78))
                (*(longlong **)(param_1 + 0x298),local_180);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_180);
  FUN_00414560(&local_48,4);
  return;
}

