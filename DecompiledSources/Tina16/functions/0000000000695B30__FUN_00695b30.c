/* Ghidra address: 00695b30 */
/* Ghidra symbol: FUN_00695b30 */


void FUN_00695b30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  int local_20;
  int iStack_1c;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8c) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8d) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8e) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x8f) = 0;
  iVar3 = (int)*(short *)(param_2 + 0x10);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) + 0xb1) == '\x01') {
    iVar3 = -iVar3;
  }
  _local_20 = CONCAT44((int)*(short *)(param_2 + 0x12),iVar3);
  cVar1 = FUN_006927d0(*(undefined8 *)(param_1 + 0x70));
  if (cVar1 == '\x01') {
    FUN_00693a30(*(undefined8 *)(param_1 + 0x70),local_30);
    cVar1 = FUN_00423210(local_30,*(longlong *)(param_1 + 0x70) + 0x40);
    if (cVar1 != '\0') {
      thunk_FUN_039ed528();
    }
  }
  FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_40);
  cVar1 = FUN_00423210(local_40,&local_20);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1a;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1b;
  }
  FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_50);
  cVar1 = FUN_00423210(local_50,&local_20);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 2;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 3;
  }
  FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_60);
  cVar1 = FUN_00423210(local_60,&local_20);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 6;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 7;
  }
  FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x88) != 0) {
    FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
  }
  FUN_00693a30(*(undefined8 *)(param_1 + 0x70),local_70);
  uVar2 = FUN_00423210(local_70,&local_20);
  *(undefined1 *)(param_1 + 0x4f) = uVar2;
  return;
}

