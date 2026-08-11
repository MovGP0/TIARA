/* Ghidra address: 01053210 */
/* Ghidra symbol: FUN_01053210 */


void FUN_01053210(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,L"PORTA");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTB");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTC");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTD");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTE");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTF");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,L"PORTG");
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,&DAT_0105369c);
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,&DAT_010536b0);
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,&DAT_010536c4);
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  FUN_00414b50(&local_10,&LAB_010536d8);
  uVar2 = FUN_00442620(&DAT_0202f42c,local_10);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x970),uVar2);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x78))(*(longlong **)(param_1 + 0x930),local_10)
    ;
  }
  _GetMCUInfo(*(undefined8 *)(param_1 + 0x970),param_1 + 0x9a4,param_1 + 0x9a8,param_1 + 0x9ac);
  FUN_00414480(&local_10);
  return;
}

