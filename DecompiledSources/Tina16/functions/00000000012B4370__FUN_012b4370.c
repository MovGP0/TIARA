/* Ghidra address: 012b4370 */
/* Ghidra symbol: FUN_012b4370 */


void FUN_012b4370(longlong param_1,undefined8 param_2,ulonglong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 local_2f;
  undefined1 local_2e;
  char local_2d;
  undefined4 local_2c;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  FUN_012b42b0(param_2,lVar1);
  uVar2 = FUN_01d34b90(*(undefined8 *)(lVar1 + 0x10));
  FUN_01cbfcb0(uVar2,1);
  lVar3 = FUN_01d34b90(*(undefined8 *)(lVar1 + 0x10));
  *(undefined2 *)(lVar3 + 0x12) = 8;
  cVar5 = (char)(param_3 & 0xffffffff);
  local_2c._0_2_ = CONCAT11(param_4,cVar5);
  puVar4 = (undefined1 *)
           FUN_01b05ad0(param_2,CONCAT71((int7)((param_3 & 0xffffffff) >> 8),cVar5 + '\x01'),0,
                        &local_2d,&local_2e,&local_2f);
  if (local_2d == '\a') {
    local_2c._0_3_ = CONCAT12(**(undefined1 **)(puVar4 + 0x26),(undefined2)local_2c);
    local_2c = CONCAT13((*(undefined1 **)(puVar4 + 0x26))[0x21],(uint3)local_2c);
  }
  else if (local_2d == '\x04') {
    local_2c._0_3_ = CONCAT12(**(undefined1 **)(puVar4 + 0x26),(undefined2)local_2c);
    local_2c = CONCAT13((*(undefined1 **)(puVar4 + 0x26))[0x21],(uint3)local_2c);
  }
  else if (local_2d == '\x05') {
    local_2c._0_3_ = CONCAT12(*puVar4,(undefined2)local_2c);
    local_2c = (uint)(uint3)local_2c;
  }
  uVar2 = FUN_01d34b90(*(undefined8 *)(lVar1 + 0x10));
  FUN_01cbfce0(uVar2,0,local_2c);
  return;
}

