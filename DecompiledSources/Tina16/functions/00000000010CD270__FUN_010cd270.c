/* Ghidra address: 010cd270 */
/* Ghidra symbol: FUN_010cd270 */


void FUN_010cd270(undefined8 param_1,longlong *param_2,undefined1 *param_3,longlong param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 auStack_178 [40];
  longlong *local_150;
  undefined1 *local_148;
  longlong local_140;
  undefined1 local_138 [268];
  undefined4 local_2c;
  short *local_28;
  undefined4 local_1c;
  
  local_28 = (short *)0x0;
  local_150 = param_2;
  local_148 = param_3;
  local_140 = param_4;
  FUN_010cd0b0(param_3);
  FUN_010cd0d0(local_140);
  FUN_010cd100(param_5);
  bVar1 = false;
  local_1c = 0;
  while( true ) {
    cVar2 = FUN_010cd240(auStack_178);
    if (cVar2 != '\0') break;
    if (bVar1) {
      FUN_010cd180(auStack_178,&local_28);
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *local_148 = (undefined1)local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      local_148[1] = (undefined1)local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      local_148[2] = (undefined1)local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      local_148[3] = (undefined1)local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *(undefined4 *)(local_148 + 4) = local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb800(local_28,local_140);
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *(undefined4 *)(local_140 + 8) = local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb800(local_28,local_140 + 0x10);
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *(undefined4 *)(local_140 + 0x18) = local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *param_5 = (undefined1)local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      FUN_00416910(local_138,local_28,0xff);
      FUN_00415020(param_5 + 1,local_138,0x28);
      FUN_010cd180(auStack_178,&local_28);
      FUN_00416910(local_138,local_28,0xff);
      FUN_00415020(param_5 + 0x2a,local_138,0x28);
      FUN_010cd180(auStack_178,&local_28);
      FUN_00416910(local_138,local_28,0xff);
      FUN_00415020(param_5 + 0x53,local_138,0x28);
      FUN_010cd180(auStack_178,&local_28);
      FUN_00416910(local_138,local_28,0xff);
      FUN_00415020(param_5 + 0x7c,local_138,0x28);
      FUN_010cd180(auStack_178,&local_28);
      FUN_00416910(local_138,local_28,0xff);
      FUN_00415020(param_5 + 0xa5,local_138,0x28);
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb800(local_28,param_5 + 0xd0);
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb800(local_28,param_5 + 0xd8);
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
      cVar2 = FUN_010cb790(local_28,&local_2c);
      *(undefined4 *)(param_5 + 0xe0) = local_2c;
      if (cVar2 != '\0') break;
      FUN_010cd180(auStack_178,&local_28);
    }
    else {
      FUN_010cd180(auStack_178,&local_28);
      if ((local_28 != (short *)0x0) && (*local_28 == 0x40)) {
        bVar1 = true;
      }
      if (!bVar1) {
        (**(code **)(*local_150 + 0x78))(local_150,local_28);
      }
    }
  }
  FUN_00414480(&local_28);
  return;
}

