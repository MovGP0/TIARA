/* Ghidra address: 00ef51f0 */
/* Ghidra symbol: FUN_00ef51f0 */


void FUN_00ef51f0(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  uint local_78;
  uint local_74;
  
  puVar2 = &local_78;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 2;
  }
  FUN_00ef4d30(param_1,local_90,local_9c);
  FUN_00ef4d60(param_1,&local_78);
  local_84 = 4;
  local_82 = 5;
  local_7e = 7;
  local_7c = 1;
  local_80 = param_3;
  FUN_00ef4d80(param_1,&local_78);
  if (((int)local_78 < 0) && (-1 < (int)local_74)) {
    FUN_00ef4950(param_1,local_74 & 0xff,local_74 & 0xff,&local_84,param_4);
  }
  else if (((int)local_78 < 0) || (-1 < (int)local_74)) {
    if ((-1 < (int)local_78) && (-1 < (int)local_74)) {
      FUN_00ef4950(param_1,local_78 & 0xff,local_78 & 0xff,&local_84,param_4);
      FUN_00ef4950(param_1,local_74 & 0xff,local_74 & 0xff,&local_84,param_4);
      local_82 = 6;
      FUN_00ef4950(param_1,(undefined1)local_78,(undefined1)local_74,&local_84,param_4);
      FUN_00ef4950(param_1,(undefined1)local_74,(undefined1)local_78,&local_84,param_4);
    }
  }
  else {
    FUN_00ef4950(param_1,local_78 & 0xff,local_78 & 0xff,&local_84,param_4);
  }
  return;
}

