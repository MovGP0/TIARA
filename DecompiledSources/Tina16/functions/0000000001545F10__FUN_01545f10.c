/* Ghidra address: 01545f10 */
/* Ghidra symbol: FUN_01545f10 */


void FUN_01545f10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,
               L"http://www.designsoftware.com/home/English/start.php?page=/distribution.php");
  uVar1 = FUN_00416740(local_10);
  thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
  *(undefined1 *)(param_1 + 0x710) = 1;
  *(undefined1 *)(param_1 + 0x711) = 1;
  FUN_00805200();
  FUN_00414480(&local_10);
  return;
}

