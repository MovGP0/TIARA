/* Ghidra address: 01b086a0 */
/* Ghidra symbol: FUN_01b086a0 */


void FUN_01b086a0(longlong param_1,longlong *param_2,int param_3,double param_4,double param_5,
                 char param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_3 == 1) {
    puVar2 = (undefined8 *)FUN_004095c0(0x28);
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[3] = param_4;
    puVar2[2] = param_5;
    if (param_5 == 0.0) {
      *(undefined1 *)(puVar2 + 4) = 2;
    }
    else {
      if (((param_6 != '\0') && (param_4 <= param_5)) || ((param_6 == '\0' && (param_5 <= param_4)))
         ) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(puVar2 + 4) = uVar1;
    }
    (**(code **)(*param_2 + 0x288))(param_2,&local_20);
    FUN_00416ad0(&local_20,&LAB_01b087e4);
    (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x80))
              (*(longlong **)(param_1 + 0x5d0),local_20,puVar2);
  }
  FUN_00414480(&local_20);
  return;
}

