/* Ghidra address: 0170b190 */
/* Ghidra symbol: FUN_0170b190 */


void FUN_0170b190(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  undefined1 local_140 [256];
  undefined8 local_40 [2];
  short local_2a;
  
  local_40[0] = 0;
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x48));
  *param_3 = uVar1;
  local_2a = (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),&local_2a,2);
  sVar4 = 0;
  sVar5 = local_2a;
  if (-1 < (short)(local_2a + -1)) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_40,(int)sVar4);
      FUN_00416910(local_140,local_40[0],0xff);
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,(int)sVar4);
      lVar3 = (**(code **)(*param_2 + 0x30))(param_2,(int)sVar4);
      FUN_0170b110(param_1,local_140,*puVar2,*(undefined4 *)(lVar3 + 4));
      sVar4 = sVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  FUN_00414480(local_40);
  return;
}

