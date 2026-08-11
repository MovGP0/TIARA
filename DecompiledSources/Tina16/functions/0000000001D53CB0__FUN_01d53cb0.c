/* Ghidra address: 01d53cb0 */
/* Ghidra symbol: FUN_01d53cb0 */


void FUN_01d53cb0(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar5;
  undefined2 uVar4;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  
  uVar5 = (undefined1)((ushort)param_3 >> 8);
  puVar3 = local_68;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_6 + 1) = 1;
  *(undefined1 *)(param_6 + 2) = 2;
  local_68[0] = FUN_016eb0a0(param_1,1);
  local_68[1] = FUN_016eb0a0(param_1,2);
  local_68[2] = FUN_016eb0a0(param_1,3);
  local_68[3] = FUN_016eb0a0(param_1,4);
  local_48 = FUN_016eb0a0(param_1,5);
  local_40 = FUN_016eb0a0(param_1,6);
  *(undefined8 *)(param_6 + 8) = local_68[0];
  *(undefined8 *)(param_6 + 0x10) = local_68[1];
  *(undefined8 *)(param_6 + 0x18) = local_68[2];
  *(undefined8 *)(param_6 + 0x20) = local_68[3];
  *(undefined8 *)(param_6 + 0x28) = local_48;
  *(undefined8 *)(param_6 + 0x30) = local_40;
  *(undefined4 *)(param_6 + 4) = 0;
  FUN_016e9e80(param_1,2);
  FUN_016e9d10(param_1,0);
  dVar1 = *(double *)(param_2 + 0x430);
  uVar4 = CONCAT11(uVar5,1);
  FUN_016ebe60(param_1,1,uVar4,0,1);
  uVar5 = (undefined1)((ushort)uVar4 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / (1.0 / dVar1),0);
  FUN_016ec420(param_1,2,CONCAT11(uVar5,1),0,2,0,0);
  FUN_016ed320(param_1,2,0,0,0);
  FUN_016e9f40(param_1,FUN_01d54120);
  FUN_016ea050(param_1,param_6,0x1b8);
  return;
}

