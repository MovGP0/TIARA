/* Ghidra address: 016c3220 */
/* Ghidra symbol: FUN_016c3220 */


void FUN_016c3220(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 local_328 [256];
  undefined1 local_228 [8];
  undefined4 local_220 [130];
  
  local_220[0] = 0x46554203;
  local_228[0] = 0;
  puVar2 = local_228;
  FUN_016c2000(*(undefined8 *)(param_1 + 0x60),local_220,
               *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x60),puVar2,1,param_1 + 0x2c);
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x9a9) == '\0') {
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x20),0);
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0x60),local_328,0,*(undefined8 *)(param_1 + 0x70),uVar3,0
                 ,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x9a9));
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x20),1);
    uVar3 = uVar3 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0x60),local_328,0,*(undefined8 *)(param_1 + 0x70),uVar3,0
                 ,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x9a9));
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x20),param_2 + 2);
    uVar3 = uVar3 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0x60),local_328,0,*(undefined8 *)(param_1 + 0x70),uVar3,0
                 ,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x9a9));
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x20),
                         *(int *)(*(longlong *)(param_1 + 0x68) + 0x68) +
                         *(int *)(*(longlong *)(param_1 + 0x68) + 0x6c) +
                         *(int *)(*(longlong *)(param_1 + 0x68) + 0x70) + param_2 + 2);
    FUN_016bd780(*(undefined8 *)(param_1 + 0x60),local_328,0,*(undefined8 *)(param_1 + 0x70),
                 uVar3 & 0xffffffffffffff00,0,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x9a9));
  }
  return;
}

