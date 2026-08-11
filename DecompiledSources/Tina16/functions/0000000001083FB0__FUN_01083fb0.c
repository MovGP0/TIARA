/* Ghidra address: 01083fb0 */
/* Ghidra symbol: FUN_01083fb0 */


void FUN_01083fb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0xe0,
                 L"C file (*.c)|*.c|CPP file (*.cpp)|*.cpp|Header file (*.h)|*.h|ASM file (*.asm;*.s)|*.asm;*.s|Linker script file (*.ld)|*.ld"
                );
  }
  else {
    FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0xe0,
                 L"Arduino source file (*.ino)|*.ino|C file (*.c)|*.c|CPP file (*.cpp)|*.cpp|Header file (*.h)|*.h|ASM file (*.asm;*.s)|*.asm;*.s|Linker script file (*.ld)|*.ld"
                );
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0xa8))(*(longlong **)(param_1 + 0x700));
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xb50) = 1;
    FUN_00724270(*(undefined8 *)(param_1 + 0x700),&local_30);
    FUN_00441a10(&local_28,local_30);
    FUN_0043e130(local_20,local_28);
    iVar2 = FUN_00416db0(local_20[0],&DAT_010844bc);
    if ((iVar2 == 0) && (*(int *)(param_1 + 0xad8) != 0x100)) {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_40,PTR_PTR_02003460);
      FUN_00b8e650(uVar3,&local_38,L"HDLStrings.Msg_InvalidFileTyp",local_40);
      FUN_016fd940(local_38);
    }
    else {
      FUN_00724270(*(undefined8 *)(param_1 + 0x700),&local_50);
      FUN_00441920(&local_48,local_50);
      cVar1 = FUN_01055690(local_48);
      if (cVar1 == '\0') {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_68,PTR_PTR_02003178);
        FUN_00b8e650(uVar3,&local_60,L"HDLStrings.Msg_InvalidFileName",local_68);
        FUN_016fd940(local_60);
      }
      else {
        FUN_00724270(*(undefined8 *)(param_1 + 0x700),&local_58);
        FUN_0107a440(param_1,local_58,0,1);
      }
    }
    *(undefined1 *)(param_1 + 0xb50) = 0;
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_30);
  FUN_00414560(&local_28,2);
  return;
}

