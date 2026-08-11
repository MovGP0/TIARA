/* Ghidra address: 01a3ea70 */
/* Ghidra symbol: FUN_01a3ea70 */


void FUN_01a3ea70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3ec44,
               L"ollama_downloader_result.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3ec44,L"answer_done.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3ec44,L"answer.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3ec44,L"log.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    iVar2 = FUN_01b21610(local_10);
    if (0x100000 < iVar2) {
      FUN_004412f0(local_10);
    }
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3ec44,L"log_short.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    iVar2 = FUN_01b21610(local_10);
    if (0x100000 < iVar2) {
      FUN_004412f0(local_10);
    }
  }
  FUN_01a52e50(param_1,L"New question...",0);
  FUN_00414480(&local_10);
  return;
}

