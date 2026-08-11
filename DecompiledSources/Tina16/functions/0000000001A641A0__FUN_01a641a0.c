/* Ghidra address: 01a641a0 */
/* Ghidra symbol: FUN_01a641a0 */


longlong FUN_01a641a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_004238d0(param_2,0,0,param_3,0);
  iVar3 = FUN_005fce00(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4a0) + 0x90) + 0x80))
  ;
  iVar4 = FUN_01d12340(*(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 0x90));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4a0) + 0x90);
  uVar1 = *(undefined1 *)(lVar2 + 0xb9);
  uVar5 = FUN_0040c770((double)iVar3 * (double)*(float *)(param_1 + 0x4a8));
  FUN_005fce30(*(undefined8 *)(lVar2 + 0x80),uVar5);
  uVar5 = FUN_0040c770((double)iVar4 * (double)*(float *)(param_1 + 0x4a8));
  FUN_01d12350(*(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 0x90),uVar5);
  lVar2 = *(longlong *)(param_1 + 0x4a0);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0xb9) = 0;
  uVar5 = FUN_01a5ee60(lVar2,*(undefined8 *)(param_1 + 0x490));
  FUN_00423090(param_2,uVar5);
  uVar5 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0x4a0),*(undefined8 *)(param_1 + 0x490));
  FUN_004230b0(param_2,uVar5);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4a0) + 0x90) + 0x80),iVar3);
  FUN_01d12350(*(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 0x90),iVar4);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x4a0) + 0x90) + 0xb9) = uVar1;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 6;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 2;
  return param_2;
}

