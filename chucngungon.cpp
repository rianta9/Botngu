#include<bits/stdc++.h>
#include<time.h>
#include <thread>
#include<chrono>
#include<windows.h>
#include "dohoa.h"
#include "reply.h"
using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


void show_mess(string s){
	cout << "Daik: ";
	rep(s);
}

void runchucngungon(){
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	vector<string> tinnhanhinh;
	tinnhanhinh.push_back("tnhinh01.txt");
	tinnhanhinh.push_back("tnhinh02.txt");
	tinnhanhinh.push_back("tnhinh03.txt");
	tinnhanhinh.push_back("tnhinh04.txt");
	tinnhanhinh.push_back("tnhinh05.txt");
	tinnhanhinh.push_back("tnhinh06.txt");
	tinnhanhinh.push_back("tnhinh07.txt");
	tinnhanhinh.push_back("tnhinh08.txt");
	tinnhanhinh.push_back("tnhinh09.txt");
	tinnhanhinh.push_back("tnhinh10.txt");
	tinnhanhinh.push_back("tnhinh11.txt");
	tinnhanhinh.push_back("tnhinh12.txt");
	tinnhanhinh.push_back("tnhinh13.txt");
	tinnhanhinh.push_back("tnhinh14.txt");
	tinnhanhinh.push_back("tnhinh15.txt");
	tinnhanhinh.push_back("tnhinh16.txt");
	tinnhanhinh.push_back("tnhinh17.txt");
	tinnhanhinh.push_back("tnhinh18.txt");
	tinnhanhinh.push_back("tnhinh19.txt");
	tinnhanhinh.push_back("tnhinh20.txt");
	tinnhanhinh.push_back("tnhinh21.txt");
	tinnhanhinh.push_back("tnhinh22.txt");
	tinnhanhinh.push_back("tnhinh23.txt");
	tinnhanhinh.push_back("tnhinh24.txt");
	tinnhanhinh.push_back("tnhinh25.txt");
	tinnhanhinh.push_back("tnhinh26.txt");
	tinnhanhinh.push_back("tnhinh27.txt");
	tinnhanhinh.push_back("tnhinh28.txt");
	tinnhanhinh.push_back("tnhinh29.txt");
	tinnhanhinh.push_back("tnhinh30.txt");
	tinnhanhinh.push_back("tnhinh31.txt");
	tinnhanhinh.push_back("tnhinh32.txt");
	tinnhanhinh.push_back("tnhinh33.txt");
	if(rand()%2 == 0){
		int rd = rand()%tinnhanhinh.size();
		string url = "file\\textfile\\" + tinnhanhinh[rd];
		char file[100];
		int vt;
		for(vt=0; vt<url.size(); vt++) file[vt] = url[vt];
		file[vt] = '\0';
		FILE *layfile = fopen(file, "r");
		SetConsoleTextAttribute(hConsoleColor, 13);

		char rem[100];
		while(1){
			if(feof(layfile)) break;
			fgets(rem, 100, layfile); 
	        for(int i=0; i<strlen(rem); i++){
				printf("%c", rem[i]);
				sleep_for(milliseconds(50));
			}
		}    
		sleep_for(milliseconds(2000));
		fclose(layfile);
	}
	
	
    else {
        vector<string> traloi;
		traloi.push_back("Nho em qua! Ngu ngoan nhe, khong duoc dap chan ra dau, lanh lam day! Anh ngu day.");
		traloi.push_back("Em a! Em da ngu chua?Troi lanh qua em nhi! \nChiec goi cua em co du am khong. Co le se chang am nhu tinh yeu\n cua anh danh cho em dau! Yeu va nho em nhieu nhieu. Good night!");
		traloi.push_back("O dau do ngoai kia duoi anh trang ban, co mot nguoi dang nghi ve em! \nO dau do ngoai kia noi nhung giac mo se tro thanh su that, ngu ngon em nhe!");
		traloi.push_back("Chuc em ngu ngon va mo nhung giac mo dep nhat va mot ngay moi \nse den voi em trong niem vui va hanh phuc. Yeu em nhat tren doi.");
		traloi.push_back("Anh chuc em ngu ngon, toi gap ac mong. \nTrong ac mong em la mot ac nhan dang hanh ha mot toi nhan la anh day.");
		traloi.push_back("thom ma 1 cai di da");
		traloi.push_back("Thuong nhau niu anh trang gay\nSoi qua mua khuyet lai day ma yeu\nGood night");
		traloi.push_back("Em ngu ngon nhe, ngay mai anh se yeu em nhieu hon hom nay.");
		traloi.push_back("Em ngu ngon, dung co ma khong nghe loi.");
		traloi.push_back("Em oi, ngu di dem da khuya roi…. de nhung giac mo dep, mai luon ben em….");
		traloi.push_back("Chuc em yeu ngu ngon! Hen gap em trong giac mo dem nay nhe. Mai yeu!");
		traloi.push_back("Hay nghe day, co be cua anh…. \nSau 10 gio…em khong duoc dien thoai khong duoc chat chit, cung khong duoc choi game… \nma chi duoc doc tin nhan cua anh va…..ngu that ngon em nhe….!!!");
		traloi.push_back("Hay luon ben nhau em nhe… \nngay ca trong giac mo chung ta cung co the thay nhau, ben nhau va yeu nhau…\nchuc nguoi yeu cua em ngu ngon");
		traloi.push_back("Luon co mot giac ngu ngon danh cho nhung tam hon trong sang va hon nhien be bong….\nva em cung the..ngu ngon nhe em, love you!!!");
		traloi.push_back("Muon lam, muon duoc noi khe vao tai, muon duoc cam dien thoai len va goi….\nnhung anh chi giam…nhan tin de noi chuc em ngu ngon…!!!");
		traloi.push_back("Hay nham mat cho ngay dai khep lai Dem khuya roi anh chuc be ngu ngon.");
		traloi.push_back("Cho toi muon bo vai\nNgay mai toi se tra\nTu dung toi buon qua\nChi muon nga dau thoi.\nChuc ngu ngon.");
		traloi.push_back("Biet la cau dang rat vui….\nNhung hay ngu that that ngon voi niem vui chua het do nhe…\nmai yeu.");
		traloi.push_back("Chao ban, minh khong phai la ai ca\nnhung thay ban mat ngu nen gheo pha vay thoi…\nneu ban thay kho chiu thi hay di ngu di nhe.");
		traloi.push_back("Hom nay ban co gi buon thi hay bo o duoi chan giuong\nco gi vui thi hay mang no vao giac mo\nmot giac mo that dep danh cho ban.");
		traloi.push_back("Tin nhan duoc gui ngau nhien… \nai nhan duoc no thi se nhat dinh co giac mo that dep va co giac ngu that ngon…");
		traloi.push_back("Du sao di nua thi, lam gi cung phai that tot, hoc that gioi\nyeu that chan thanh, lam that tot va ngu cung phai that ngon.");
		traloi.push_back("Co mot anh chang dang ngoi cau ca\nCo mot chiec la dang troi tren song\nCo mot con cong dang tap mua\nCo mot cong chua dang ngu trong mung\nVa co mot dua khung dang doc tin nhan nay\nNgu ngon nhe do khung!!! ^^");
		traloi.push_back("Neu ban dang that kho ngu, thi hay doc tin nhan nay cua toi nhe\nban se nhanh chong ngu that ngon thoi, thuong!");
		traloi.push_back("E, may ngu chua, chua ngu thi thi chuc may ngu ngon nhe\ncon ngu roi thi day doc tin nhan cua tao roi ngu tiep nhe\ncon khung<3!!");
		traloi.push_back("That ngai qua, tre nhu vay roi con lam phien ban, khong biet ban da ngu chua\nnhung minh chi muon noi voi ban mot cau la…chuc ban ngu ngon.");
		traloi.push_back("Man dem da buong xuong, nhung ngoi sao lung linh va lap lanh that dep\nnhung that su khong dep bang mat cua e\nhay ngu that ngon nhe ngoi sao trong long toi.");
		traloi.push_back("Ngay xua, ngay xua… Khi trai dat chua ra doi, mat troi cung chua co\nTham chi luc ay, vu tru cung chua hinh thanh vi vay cha co gi ma ke ca\nHehe. Chuc ban ngu ngon.");
		traloi.push_back("Chao mat trang, ban gau truc cua toi sap di ngu roi.\nNoi voi mat troi hay day muon mot chut.\nBoi vi ban gau truc muon nghi ngoi them nua.\nChuc em ngu ngon nhe gau truc.");
		traloi.push_back("Be oi ngu ngoan dem da khuya roi\nde nhung giac mo dep se theo em, a oi a oi….\nChuc be ngu ngon.");
		traloi.push_back("Gio tay len! Cuop day!\nLeo len giuong!\nNam xuong!\nNham mat lai!\nChuc be ngu ngon!");
		traloi.push_back("Thay mat hiep hoi chuc ngu ngon toan cau, uy ban vi su ngu ngon cua gau truc.\nCuc truong cuc cham soc giac ngu.\nHoi truong hoi nhung nguoi ngu ngon.\nChuc em ngu ngon.");
		traloi.push_back("Chao ban!\nBan dang co mat tren chuyen bay cua hang hang khong “Sweet Dreams – Nhung giac mo ngot ngao”.\nBan hay nam ngoan tren giuong, om chat gau bong,\nnham mat that ky vi trong khoang 5 phut nua chuyen bay se bat dau khoi hanh.\nHay tan huong thoi gian tuyet voi nay trong dem nay ban nhe! ^^");
		traloi.push_back("Thue bao quy khach dang dung hien dang bi 1 thue bao dep trai khac de y.\nDe nghi quy khach chu y: Dap chan va ngu thoi!");
		traloi.push_back("Mot ngay nua lai sap troi qua roi ay a.\nKhong biet minh co phai la nguoi cuoi cung nhan tin cho ay khong?\nChuc ay ngu ngon va mo thay chang hoang tu cua ay nhe!");
		traloi.push_back("Tonight, I'll fall asleep with you in my heart!");
		traloi.push_back(" Dem nay, anh se chim vao giac ngu cung em o trong trai tim anh.");
		traloi.push_back("Cho du bau troi mau xanh hay mau xam, cho du bau troi co trang hay co sao\nmien la trai tim em chan thanh, nhung giac mo ngot ngao se luon o ben em.\nChuc ngu ngon!!");
		traloi.push_back("Dem da roi xuong, da den luc phai di ngu roi.\nMo ve anh nhe va trum chan that kin vao!");
		traloi.push_back("Cho du em co o dau di chang nua thi em van luon trong tam tri anh.\nChuc em ngu ngon.");
		traloi.push_back("Every day I love you more than yesterday. Have a wonderful night.");
		traloi.push_back(" Good night, my little princess.");
		traloi.push_back("One day I want to fall asleep beside you and wake up with you.");
		traloi.push_back("Mot ngay nao do, co the anh se ngu vui va thuc day ben canh cung em…");
		traloi.push_back("Good night! I love you so much!");
		traloi.push_back("I used to think that dreams do not come true\nbut this quickly changed at the moment\nI laid my eyes on you. Good night!");
		traloi.push_back("Anh tung nghi giac mo se khong tre tro thanh hien thuc\nnhung y nghi ay da thay doi ke tu giay phut anh nhin thay em.\nNgu ngon nhe em!");
		traloi.push_back("Anh dang nhin ra ngoai cua so va nghi ve nguoi ma anh yeu rat nhieu.\nNguoi ay chinh la em boi vay anh muon chuc em ngu ngon!");
		traloi.push_back("Anh mong sao em luon khoe manh va tam trang thoai mai de co mot giac ngu ngon!");
		traloi.push_back("Hay nghi ve nhung khoanh khac tot dep cua hom nay va luon cuoi cho ngay mai nhe.\nChuc em ngu ngon!");
		traloi.push_back("You will be the last thing I think of before I fall asleep \nAnd the first thing I think of when I wake up.");
		traloi.push_back("Em se la dieu cuoi cung anh nghi ve truoc khi ngu.\nVa la nguoi dau tien anh nghi den khi thuc day.");
		traloi.push_back("Thinking about you is the tipping point where my nightmares end and sweet dreams begin.");
		traloi.push_back("Nghi ve em la gioi han khi ma ac mong cua anh ket thuc, va nhung giac mo ngot ngao bat dau.");
		traloi.push_back("O dau do ngoai kia duoi anh trang bac, co mot nguoi dang nghi ve em!\nO dau do ngoai kia noi nhung giac mo se tro thanh su that…\nngu ngon va mo dep em nhe!!");
		traloi.push_back("Don’t lose hope. You never know what tomorrow will bring. Good night!");
		traloi.push_back("Dung bao gio ngung hi vong.\nBoi cau se khong bao gio biet rang ngay mai se tang cau dieu gi.\nNgu ngon nhe!");
		traloi.push_back("Ngay hom nay, em hay ngu that ngon voi hinh bong o trong trai tim.");
		traloi.push_back("Luon co mot thu gi do to lon, am ap va mo ao.\nTruoc khi em nhan lai qua nhieu van de,\nem nen biet rang co mot cai om chuc ngu ngon anh danh tang em!");
		traloi.push_back(" Nhin dong ho anh moi chot giat minh, nhan tin cho em quen luon ca thoi gian…..\nchuc ngu ngon nhe! Em yeu….");
		traloi.push_back("Nhanh nhanh rua chan va rua mat,leo len giuong\nnam dap chan lai vi anh co chuyen nay gap can nhan cho em biet….\nchuc em ngu ngon.");
		traloi.push_back("Em co biet khong? nhin em ban ngay xau lam…\nnhung khi em ngu lai rat xinh va dang yeu Ngu di…\nchuc em ngu ngon.");
		traloi.push_back("Troi se lanh anh luc do se la tam day va am de dap cho em duoc khong?\nGiac ngu ngon cua em se nhin thay mot con bach ma de dua em den mot hanh phuc nhe!");
		traloi.push_back("Chuc em ngu ngon\nde tranh thu troi di nhung muon phien lo lang\nde kip no nu cuoi rang ro tren moi em.\nChuc buoi toi tot lanh, yeu em.");
		traloi.push_back("Ben anh dang lanh, kho ngu, vi nho em, chu khong phai vi thoi tiet lanh dau nha!\nNgu ngon nhe, dap chan cho kin keo bi lanh giong anh day!");
		traloi.push_back("Anh can em giup anh mot viec gap nhe! Viec dau tien, hay ngu that ngon.\nViec ke tiep, em hay no mot nu cuoi vao sang mai thuc day.\nCuoi cung la anh muon em luc nao cung vui ve.");
		traloi.push_back("Em a! Mot ngay cua anh khong the ket thuc tron ven neu chua lam duoc mot dieu nay\ndo la chuc em ngu ngon.");
		traloi.push_back("Chuc em iu cua anh co mot giac ngu ngon that la ngon nhe va mo ve anh nua nha! Yeu e nhieu nhieu!");
		traloi.push_back("Dem nay anh khong biet nhan gi cho em ca !\nAnh chi biet bay gio anh dang nho em, nho rat nhieu,\ntuy noi day troi mua va rat lanh nhung anh chi mong\nem co giac ngu that ngon am ap trong nhung giac mo hanh phuc em nhe!");
		traloi.push_back("Em co biet em chinh la ly do\nma hang dem anh khong ngu duoc va anh chi ngu duoc khi noi voi em rang:\nChuc em ngu ngon” ngu ngon nhe co be.");
		traloi.push_back("Neu co the, anh nguyen…moc trai tim chan thanh cua anh ra de tang em,\nsuoi am trai tim em trong dem dong lanh gia nay.\nNgu ngon nhe em yeu!");
		traloi.push_back("Em yeu ah, den gio di ngu roi do.\nNho la dung co thuc khuya xem phim nhe phai giu gin suc khoe mai con di hoc chu!\nNgoan anh moi yeu.hj.");
		traloi.push_back("____<3<3<3____<3<3<3_____\n__<3_____<3_<3_____<3____\n__<3______<3______<3_____\n____<3___Chuc___<3_______\n_____<3_______<3_________\n_______<3___<3___________\n_________<3______________\n_______<3___<3___________\n_____<3_______<3_________\n___<3__NGUNGON__<3_______\n__<3______<3______<3_____\n__<3_____<3_<3_____<3____\n____<3<3<3____<3<3<3_____");
		int rd = rand()%traloi.size();
		show_mess(traloi[rd]);
        return;
    }
}






