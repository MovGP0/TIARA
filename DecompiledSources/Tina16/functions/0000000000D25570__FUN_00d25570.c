/* Ghidra address: 00d25570 */
/* Ghidra symbol: FUN_00d25570 */


void FUN_00d25570(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 local_res18 [4];
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined1 local_68 [12];
  uint local_5c;
  undefined1 local_58 [48];
  
  local_res18[0] = param_3;
  local_70 = param_1;
  FUN_00d21150(param_1,local_res18);
  FUN_0040d200(local_58,0x30,0);
  FUN_0040d200(local_68,0x10,0);
  lVar2 = local_70[0xd];
  FUN_00d25360(auStack_98);
  iVar3 = 8;
  do {
    FUN_00d253f0(auStack_98,local_68);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      FUN_00d253f0(auStack_98,lVar2 + 0xc + (longlong)(iVar3 * 0x20 + iVar4 * 4) * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_00d253f0(auStack_98,local_68);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xc);
  FUN_00d253f0(auStack_98,local_68);
  puVar1 = (uint *)(lVar2 + 0xc + (longlong)(int)(local_5c & 0x7f) * 4);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)local_70[0xd];
  *puVar1 = local_5c >> 0x18;
  puVar1[1] = local_5c >> 0x10;
  puVar1[2] = local_5c >> 8;
  FUN_0040d200(local_58,0x30,0);
  (**(code **)(*local_70 + 0x40))(local_70,param_4);
  FUN_00409a70(local_70[0xd],local_70[0xd] + (longlong)(int)(*(uint *)(local_70 + 9) >> 1),
               *(uint *)(local_70 + 9) >> 1);
  return;
}

